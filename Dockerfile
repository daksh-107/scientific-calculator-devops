FROM ubuntu:20.04

RUN apt-get update && apt-get install -y gcc

WORKDIR /app

COPY calculator.c .

RUN gcc calculator.c -o calculator -lm

CMD ["./calculator"]
