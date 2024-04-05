#!/bin/bash

# 参数检查
if [ "$#" -eq 0 ]; then
    echo "./create.bash 题目编号"
    exit 1
fi

echo "题目编号 $1, 开始创建"

problemNum=$1

if [ -d "$problemNum" ]; then 
    if [ "$#" -lt 2 ]; then
        echo "存在文件夹, ./create.bash 题目编号 任意"
        exit 1
    fi
fi

templateDir="./template"
problemDir=$problemNum
mkdir -p "$problemDir"

for file in "$templateDir"/*; do

    filename=$(basename "$file" .tmp)

    targetFile="$problemDir/$filename"
    if [ -f $targetFile ]; then
        echo "$targetFile 存在, 跳过"
        continue
    fi
    
    sed "s/PROBLEM_NUM_PLACEHOLDER/$problemNum/g" "$file" > "$targetFile" 
    echo "新建文件 $targetFile"
done