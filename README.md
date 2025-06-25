# 🧠 Libft Practice – Standard C Library, Forty-Two

Welkom,

Dit project is mijn persoonlijke implementatie van een selectie uit de C Standard Library functies — opgebouwd vanaf nul, in de terminal, met alleen Vim, en met de focus op begrip, geheugencontrole en veiligheid.  

---

## 📚 Wat is Libft?

Libft is een individueel project bij Codam/42 waarbij je een eigen versie moet schrijven van veelgebruikte functies uit de C-standaardbibliotheek. Denk aan functies voor strings, geheugen, conversie en meer.  

Deze library vormt een basis voor latere, complexere projecten zoals `get_next_line`, `ft_printf` en uiteindelijk zelfs een shell of webserver.

---

## 🎯 Doelen

- ✅ Begrijpen hoe C écht werkt, op laag niveau
- ✅ Leren omgaan met geheugenbeheer, pointers en allocatie
- ✅ Werken vanuit de command line en met Vim
- ✅ Bouwen aan robuuste, veilige en herbruikbare code
- ✅ Alles zelf doen: testen, debuggen, en optimaliseren
- ✅ Mijn eigen tools ontwikkelen voor pentesting en automatisering

---

## ⚙️ Werken met dit project

Volg deze stappen:

```bash
# Project clonen
git clone https://github.com/<jouw-gebruikersnaam>/libft_practice.git && cd libft_practice/

# Library bouwen
make

# Bonus (linked lists)
make bonus

# Compileer je eigen testbestand met de library
clang main.c libft.a

# Run je programma
./a.out

# Alles opruimen
make fclean
```

---

## 🧪 Hoe ik test

Alle functies zijn standalone te testen met een eigen `main.c`.  
Ik schrijf testbestanden per functie in de `tests/` map, en compileer zoals:

```bash
gcc -Wall -Wextra -Werror src/ft_strlen.c tests/main_strlen.c -o test_strlen

---

## 🧩 Library Overzicht (voor mezelf en toekomstige devs)

| C Library | Libft Functie | Beschrijving |
|----------|----------------|---------------|
| `<ctype.h>` | `ft_isalpha`, `ft_isdigit`, ... | Karakter checks |
| `<string.h>` | `ft_memset`, `ft_strchr`, ... | Geheugen en stringbewerking |
| `<stdlib.h>` | `ft_atoi`, `ft_calloc`, ... | Conversie en allocatie |
| Niet-standaard | `ft_split`, `ft_itoa`, `ft_strtrim`, ... | Extra functies voor reusability |
| Bonus | `ft_lst*` | Linked list manipulatie |
| Persoonlijk | `ft_str_replace`, `ft_uitoa_base`, ... | Mijn eigen tools voor future projects |

---

## 🔒 Waarom dit project belangrijk is voor mijn toekomst

- Het leert me **C begrijpen
- Het dwingt me na te denken over **buffer overflows**, **null terminators**, en **pointer safety**
- Het vormt de technische basis voor toekomstige projecten zoals exploit development, tool building en cybersecurity advies

---

## 🚧 Status

Ik werk elke week aan dit project. Nieuwe functies, testcases en optimalisaties worden regelmatig toegevoegd.  

---

## 📜 Licentie

Dit project valt onder de GNU General Public License v3.0 – zie het LICENSE-bestand voor details.

---
