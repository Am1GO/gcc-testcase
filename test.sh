#!/bin/bash
export LANG=C

cleanup(){
	rm -f testcase.pb* testcase
}

build(){
	protoc testcase.proto --cpp_out=./
	[[ -z $CXX ]] && CXX=g++
	$CXX -g -lprotobuf -lstdc++ -o testcase *cc
}

cleanup
build
./testcase

if [[ $? -ne 0 ]]; then
	echo "# $CXX -v"
	$CXX -v
else
	echo "All is fine!"
fi

cleanup
