# ♟️ Desafio Xadrez em C / Chess Challenge in C

Projeto desenvolvido como parte de uma série de desafios em linguagem C, simulando a movimentação das peças de xadrez: **Torre**, **Bispo**, **Rainha** e **Cavalo**. As implementações seguem os níveis de dificuldade crescentes, utilizando estruturas de repetição, **recursividade** e **loops aninhados**.

---

Project developed as part of a series of C programming challenges, simulating the movements of chess pieces: **Rook**, **Bishop**, **Queen**, and **Knight**. Each challenge increases in complexity, involving loops, **recursion**, and **nested control structures**.

---

## 🎯 Objetivo / Objective

Simular no console os movimentos básicos das peças de xadrez utilizando estruturas de repetição, recursividade e controle de fluxo.

Simulate basic chess piece movements in the terminal using loops, recursion, and control flow structures.

---

## 🧠 Lógica das Peças / Piece Logic

| Peça (PT) | Piece (EN) | Movimento | Estrutura utilizada |
|----------|------------|-----------|----------------------|
| Torre    | Rook       | 5 casas para a Direita / 5 steps Right | Recursividade / Recursion |
| Bispo    | Bishop     | 5 casas em Diagonal (Cima + Direita) / Diagonal Up + Right | Recursividade + Loops aninhados |
| Rainha   | Queen      | 8 casas para a Esquerda / 8 steps Left | Recursividade / Recursion |
| Cavalo   | Knight     | Movimento em “L” (2 cima, 1 direita) / L-shape (2 up, 1 right) | Loops aninhados com controle de fluxo |

---

## 📄 Arquivo Principal / Main File

- `Xadrez.c`  
  Contém toda a implementação dos movimentos, organizada por função e com comentários explicativos.  
  Includes all movement implementations, structured by function and clearly commented.

---

## ⚙️ Compilação / Compile

```bash
gcc Xadrez.c -o xadrez.exe
```

---

## ▶️ Execução / Run

```bash
./xadrez.exe
```

---

## 🧪 Exemplo de Saída / Sample Output

```
Movimento da Torre:
Direita
Direita
...

Movimento do Cavalo:
Cima
Cima
Direita
```

---

## 🧩 Destaques Técnicos / Technical Highlights

- Uso de **funções recursivas** seguras para simular trajetos
- Controle de fluxo com `break` e `continue` para o Cavalo
- Código **modular**, limpo e organizado com boas práticas

---

## 👨‍💻 Autor / Author

**Paulo Augusto**  
📧 [pauloaugusto37.ti@gmail.com](mailto:pauloaugusto37.ti@gmail.com)  
🔗 [github.com/P4ulo38](https://github.com/P4ulo38)

---

## 🚀 Licença / License

Projeto de caráter educacional.  
Educational project — feel free to study, adapt, and share!
