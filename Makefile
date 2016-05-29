
mkdir -p build
gcc -o ./build/ex1 ./examples/example1.c openssl_lck.c pbkdf2.c base64.c -lcrypto -std=gnu89 -pedantic -Wall -O2 -g
