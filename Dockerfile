FROM gcc:13

WORKDIR /app

COPY calculadora.cpp .

RUN g++ calculadora.cpp -o calculadora

CMD ["./calculadora"]
