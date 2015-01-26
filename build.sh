#!/bin/bash -x
rm -f testcase.pb* testcase
protoc testcase.proto --cpp_out=./

case "$1" in
  gcc)
    g++ -g -lprotobuf -lpthread -o testcase *cc
    ;;
  clang)
    clang++ -g -lprotobuf -lpthread -o testcase *cc
    ;;
  *)
    echo "Usage: $0 <gcc|clang>"
    ;;
esac
