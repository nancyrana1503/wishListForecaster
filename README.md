# 💰 Wish List Forecaster (Workshop 6 Part-1)

This program allows users to enter their net monthly income and build a wish list of items they plan to purchase in the future. Each item is assigned a price, priority, and financing option. The application stores this information using parallel arrays and displays a summary table of the wish list along with the total cost.

---

## ⚙️ How to Use

1. **Clone or Download the Repository**  
   ```
   git clone https://github.com/Seneca-144100/IPC-Workshops.git
   ```
   Or download the ZIP and **extract it**.

2. **Compile and Run**  
   Use a C compiler like `gcc`:
   ```bash
   gcc w6p1.c -o wishlist
   ./wishlist
   ```

4. **Follow the Prompts**
   * 0
   * 500000
   * 6500.50
   * 0
   * 11
   * 3
   * 39030.15
   * 0
   * 4
   * 1
   * N
   * Y
   * k
   * n
   * 99.99
   * 1200000
   * 3
   * y
   * 350500.25
   * 2
   * n
     
6. **View Summary Table**  
   A formatted table will display each item's details and the total cost of all items.

---

## 📌 Example Output

```+--------------------------+ + Wish List Forecaster | +--------------------------+ Enter your monthly NET income: $0 ERROR: You must have a consistent monthly income of at least $500.00 Enter your monthly NET income: $500000 ERROR: Liar! I'll believe you if you enter a value no more than $400000.00 Enter your monthly NET income: $6500.50 How many wish list items do you want to forecast?: 0 ERROR: List is restricted to between 1 and 10 items. How many wish list items do you want to forecast?: 11 ERROR: List is restricted to between 1 and 10 items. How many wish list items do you want to forecast?: 3
Item-1 Details: Item cost: $39030.15 How important is it to you? [1=must have, 2=important, 3=want]: 0 ERROR: Value must be between 1 and 3 How important is it to you? [1=must have, 2=important, 3=want]: 4 ERROR: Value must be between 1 and 3 How important is it to you? [1=must have, 2=important, 3=want]: 1 Does this item have financing options? [y/n]: N ERROR: Must be a lowercase 'y' or 'n' Does this item have financing options? [y/n]: Y ERROR: Must be a lowercase 'y' or 'n' Does this item have financing options? [y/n]: k ERROR: Must be a lowercase 'y' or 'n' Does this item have financing options? [y/n]: n Item-2 Details: Item cost: $99.99 ERROR: Cost must be at least $100.00 Item cost: $1200000 How important is it to you? [1=must have, 2=important, 3=want]: 3 Does this item have financing options? [y/n]: y Item-3 Details: Item cost: $350500.25 How important is it to you? [1=must have, 2=important, 3=want]: 2 Does this item have financing options? [y/n]: n Item Priority Financed Cost ---- -------- -------- ----------- 1 1 n 39030.15 2 3 y 1200000.00 3 2 n 350500.25 ---- -------- -------- ----------- $ 1589530.40 Best of luck in all your future endeavours!
Part-1
```

---

## 🔐 Input Validation

- **Income Range**: `$500.00` to `$400,000.00`
- **Wish List Items**: `1` to `10` (macro-defined)
- **Item Cost**: Minimum `$100.00`
- **Priority**: Must be `1`, `2`, or `3`
- **Finance Option**: Only accepts `'y'` or `'n'`

---
