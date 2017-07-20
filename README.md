# ゼロから作る Deep Learning C++ Version

本リポジトリではオライリー・ジャパン発行書籍『ゼロから作る Deep Learning』のC++バージョンを作っていきます。  
本家のPythonバージョンは[こちら](https://github.com/oreilly-japan/deep-learning-from-scratch)。

## ファイル構成

本家に準じます。

## 必要条件

ソースコードを実行するには、下記のソフトウェアがインストールされている必要があります。

- make
- g++ 4.9 >=
- [xtensor](https://github.com/QuantStack/xtensor)
- [xtensor-blas](https://github.com/QuantStack/xtensor-blas)

## 実行方法

各章のフォルダへ移動して、makeコマンドを実行します。

```sh
$ cd ch01
$ make
$ ./man

$ cd ../ch05
$ make
$ ./train_nueralnet
```

## ライセンス

本リポジトリのソースコードはMITライセンスです。 商用・非商用問わず、自由にご利用ください。
