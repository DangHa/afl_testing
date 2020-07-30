# Demo for AFL testing

## How to run AFL


```bash
$ mkdir alftesting
$ cd alftesting
$ CC=/usr/local/bin/afl-gcc CXX=/usr/local/bin/afl-g++ cmake ..
$ make
$ /usr/local/bin/afl-fuzz -i ../testcases -o ../findings ./demo-afl
```

* For more quickly install (use this docker image)
```
docker pull hadang/ubuntu20.04-afl
```