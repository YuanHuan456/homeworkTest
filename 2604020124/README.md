# Homework1 作业提交 — 学号 2604020124

- **学号**：2604020124
- **姓名**：袁欢
- **班级**：26 级电子信息工程 1 班
- **专业**：电子信息工程

## 题目清单

| 文件 | 题目 | 内容 |
|------|------|------|
| `task1_card.c` | 题目1| 个人信息卡片（ASCII 框线输出） |
| `task2_types.c` | 题目 2 | 基本数据类型演示（int / float / double / char） |
| `task3_table.c` | 题目 3 | 格式化输出练习（商品价目表） |
| `task4_bonus.c` | 题目 4（附加） | 单位换算表（英寸 → 厘米） |

## 工程结构

- `2604020124.slnx` — Visual Studio 解决方案
- `2604020124.vcxproj` / `.filters` — C 项目配置

## 编译运行

四个 `.c` 文件各自包含独立的 `main()`，单独编译运行即可：

```bash
gcc task1_card.c   -o task1_card   && ./task1_card
gcc task2_types.c  -o task2_types  && ./task2_types
gcc task3_table.c  -o task3_table  && ./task3_table
gcc task4_bonus.c  -o task4_bonus  && ./task4_bonus
```

在 Windows 控制台运行中文输出程序时，需确保终端编码为 UTF-8
（源码中已通过 `system("chcp 65001 > nul")` 与 `#pragma execution_character_set("utf-8")` 处理）。

## 说明

- 构建产物（`x64/`、`.vs/`、`*.obj`、`*.tlog` 等）已通过仓库根目录 `.gitignore` 排除。
- 本次 PR 将作业源码从 `homework-2604020124` 分支合入 `2604020124` 学号分支。
