# My Sokoban

A Sokoban game written in C using the ncurses library.

---

## Requirements

- A Linux system
- ncurses library

> This project uses a Makefile and was developed on Linux. Compilation and execution on other platforms is not supported.

---

## Installation and Setup

**1. Get the project**

Clone the repository or download it as a ZIP and decompress it:

```bash
git clone https://github.com/your-username/my_sokoban.git
```

Or download the ZIP from GitHub and extract it:

```bash
unzip my_sokoban.zip
```

**2. Install ncurses**

```bash
sudo apt-get install libncurses-dev
```

**3. Build the project**

Navigate to the `bonus` folder and run Make:

```bash
cd my_sokoban/bonus
make
```

**4. Run the game**

You can choose the map you want, in this case we chose the smallest one available:

```bash
./my_sokoban ../maps/map_3b_small
```

---

## How to Win

Push every **X** (green box) onto a **O** (red slot). Once all green boxes are placed on red slots, the level is complete.

---

## License

This project is licensed under the MIT License. See `LICENSE` for details.
