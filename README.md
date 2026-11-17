# CSSD102_projects

# CSSD102 Systems & Algorithmic Foundations in C++

## Abstract

This repository contains a collection of standalone command-line systems developed in **C++11** as part of the **CSSD102** curriculum. The projects explore core systems programming paradigms—including **$O(1)$ hash-table identity verification**, **deterministic finite-state lifecycle control**, **financial state simulation**, **pseudo-random number generation (PRNG)**, and **fault-tolerant `std::cin` stream sanitization**—implemented using only the C++ Standard Library with zero external dependencies.

---

## Repository Architecture & Module Overview

```text
CSSD102_projects/
├── votingstystem.cpp              # O(1) hash-map electronic election & tallying engine
├── assignmentsavingsandloans.cpp  # Account ledger, interest calculation & loan management CLI
├── rockpapersccissors.cpp         # Probabilistic game-loop state machine against PRNG agent
├── simpleguessinggame.cpp         # Bounded binary-search / feedback-driven guessing engine
└── README.md                      # Architectural overview, complexity analysis & build guide
```

### Summary of Implementations

| Module | Core Algorithms & Data Structures | Time Complexity | Key Systems Concepts |
| :--- | :--- | :--- | :--- |
| **`votingstystem.cpp`** | `std::unordered_map`, static tally array (`int[12]`) | $O(1)$ avg lookup/tally | Hash-based voter verification, single-ballot idempotency, admin state machine |
| **`assignmentsavingsandloans.cpp`** | Iterative arithmetic loops, conditional state guards | $O(1)$ per transaction | Balance validation, deposit/withdrawal invariants, loan eligibility logic |
| **`rockpapersccissors.cpp`**[cite: 3] | PRNG (`rand()` / `<random>`), payoff matrix | $O(1)$ per round | Input sanitization, deterministic outcome evaluation, session score tracking |
| **`simpleguessinggame.cpp`**[cite: 3] | Bounded PRNG, iterative comparison loop | $O(\log N)$ optimal search | Directional feedback (`higher`/`lower`), attempt counting, stream recovery |

---

## Featured Architecture: Electronic Voting Engine (`votingstystem.cpp`)

### 1. Data Structures & Asymptotic Trade-offs

To avoid $O(N)$ linear scans during voter authentication and vote aggregation, `votingstystem.cpp`[cite: 3] decouples identity lookup from tally storage:

* **Voter Registry (`std::unordered_map<std::string, std::string>`):** Maps unique student index IDs to full names, yielding $O(1)$ average-case eligibility verification ($O(N)$ worst-case under hash collision) and $O(V)$ space complexity for $V$ registered voters.
* **Participation Ledger (`std::unordered_map<std::string, bool>`):** Enforces single-vote idempotency in $O(1)$ average time without mutating the underlying student registry.
* **Ballot Tallies (`int candidateTallies[12]`):** Uses a contiguous stack-allocated array for $O(1)$ worst-case increment operations and optimal spatial cache locality across six executive portfolios.

### 2. Election Lifecycle State Machine

Election integrity is enforced via boolean state flags (`votingcommence`, `votingend`) gated behind a password-authenticated administrative console:

* **Pre-Election (`commence = false`, `end = false`):** Ballot submission is locked while candidate rosters remain publicly queryable.
* **Active Polling (`commence = true`, `end = false`):** Verified voters cast sequential ballots across six portfolios (12 candidates total).
* **Post-Election (`end = true`):** Polling closes and live vote distributions are exposed to election officials.

### 3. Fault-Tolerant Input Stream Sanitization

Across all four executables, interactive CLI loops guard against `std::cin` fail-bit lockups triggered by non-numeric tokens. Explicit recovery routines (`std::cin.clear()` followed by `std::cin.ignore(1000, '\n')`) flush malformed buffers and maintain deterministic execution flow.

---

## Reproducibility & Build Instructions

### Prerequisites

* **Compiler:** GCC (`g++` >= 4.8), Clang (`clang++` >= 3.3), or MSVC supporting C++11 or later
* **Dependencies:** C++ Standard Library only (zero third-party libraries)

### Clone & Compile

```bash
git clone [https://github.com/kennedykwarteng299-cloud/CSSD102_projects.git](https://github.com/kennedykwarteng299-cloud/CSSD102_projects.git)
cd CSSD102_projects

# Compile individual modules
g++ -std=c++11 -Wall -Wextra -O2 votingstystem.cpp -o voting_system
g++ -std=c++11 -Wall -Wextra -O2 assignmentsavingsandloans.cpp -o savings_loans
g++ -std=c++11 -Wall -Wextra -O2 rockpapersccissors.cpp -o rps_game
g++ -std=c++11 -Wall -Wextra -O2 simpleguessinggame.cpp -o guessing_game
```

### Execution

```bash
# Linux / macOS
./voting_system

# Windows
voting_system.exe
```

---

## Future Engineering & Research Directions

* **Durability & Crash Consistency:** Persist in-memory ledgers (`votingstystem.cpp`[cite: 3] and `assignmentsavingsandloans.cpp`[cite: 3]) to disk via write-ahead logging (WAL) or an embedded key-value store.
* **Privacy & PII Decoupling:** Externalize student registry records into salted cryptographic hashes so raw personally identifiable information (PII) is isolated from source control.
* **Cryptographic Auditability:** Extend the voting engine with verifiable ballot receipts or homomorphic tallying to guarantee end-to-end auditability.
