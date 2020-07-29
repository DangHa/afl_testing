# Demo for AFL testing

## How to run AFL

```bash
$ mkdir alfbuild
$ cd alfbuild
$ CC=/usr/local/bin/afl-gcc CXX=/usr/local/bin/afl-g++ cmake ..
$ make
$ /usr/local/bin/afl-fuzz -i ../testcases -o ../findings ./demo-afl
```