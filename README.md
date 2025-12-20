
<p align="center"><h1 align="center">libft</h1></p>
<p align="center">
	libcの再実装および汎用モジュール
</p>
<p align="center">
	<a href="./LICENSE">
    <img src="https://img.shields.io/github/license/icchon/libft" alt="license">
</a>

</p>
<br>

##  Contents

- [Overview](#overview)
- [Features](#features)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
  - [Usage](#usage)
- [License](#license)

---

## Overview

`libft` は、C標準ライブラリlibcの関数を再実装し、便利な汎用関数を追加したC言語ライブラリ

---

## Features

- **algo**: アルゴリズム
- **arr**: 配列操作
- **io**: 入出力 (`get_next_line`, `ft_printf`)
- **is**: 型判定
- **lst**: 連結リスト
- **mem**: メモリ操作
- **num**: 数値操作
- **quat**: 四元数（クォータニオン）
- **str**: 文字列操作
- **sys**: システム関連
- **util**: 汎用ユーティリティ
- **vec**: 2D/3Dベクトル

---
## Getting Started

### Prerequisites
-   **Clang:** (C99 or later)
-   **cc** (17.7.0 or later)
-   **GNU make** (3.8.1 or later)

### Installation

```sh
❯ git clone https://github.com/icchon/libft
❯ cd libft
❯ make
```

### Usage
`libft.a` を生成後、プロジェクトでインクルードする。

```sh

├─libft
└─main.c
```
main.c
```c
#include "libft.h"
int main(void){
    ft_putchar('c');
    return (0);
}
```
```sh
❯ cc main.c libft.a -I libft/includes
❯ ./a.out
```
---

## License
This project is licensed under the MIT License - see the [LICENSE](./LICENSE) file for details.

© 2025 icchon