# ♟️ Desafio Xadrez em C

Projeto desenvolvido como parte de um desafio introdutório em C, simulando a movimentação de três peças de xadrez: **Torre**, **Bispo** e **Rainha**. Cada peça utiliza uma estrutura de repetição diferente para reforçar o uso de `for`, `while` e `do-while`.

---

## 🎯 Objetivo

Exercitar o uso das estruturas de repetição em C simulando a movimentação das peças de xadrez no console, exibindo a direção de cada movimento a cada casa percorrida.

---

## 💡 Peças e lógica de movimentação

- **Torre**: move 5 casas para a direita → estrutura `for`
- **Bispo**: move 5 casas na diagonal (cima e direita) → estrutura `while`
- **Rainha**: move 8 casas para a esquerda → estrutura `do-while`

---

## 📄 Arquivo principal

- `MovimentandoPeças.c`  
  Contém toda a lógica e simulação das três peças, com comentários explicativos.

---

## 🛠️ Compilando o projeto

```bash
gcc MovimentandoPeças.c -o xadrez.exe
```

---

## ▶️ Executando

```bash
./xadrez.exe
```

---

## 🧪 Exemplo de saída

```
Movimento da Torre (5 casas para a direita):
Direita (1)
Direita (2)
Direita (3)
Direita (4)
Direita (5)

Movimento do Bispo (5 casas na diagonal Cima + Direita):
Cima Direita (1)
Cima Direita (2)
Cima Direita (3)
Cima Direita (4)
Cima Direita (5)

Movimento da Rainha (8 casas para a esquerda):
Esquerda (1)
Esquerda (2)
Esquerda (3)
Esquerda (4)
Esquerda (5)
Esquerda (6)
Esquerda (7)
Esquerda (8)
```

---

## 👨‍💻 Autor

**Paulo Augusto**  
📧 [pauloaugusto37.ti@gmail.com](mailto:pauloaugusto37.ti@gmail.com)  
🔗 [github.com/P4ulo38](https://github.com/P4ulo38)

---

## 🚀 Licença

Projeto educacional e pessoal. Fique à vontade para estudar, adaptar e compartilhar!
