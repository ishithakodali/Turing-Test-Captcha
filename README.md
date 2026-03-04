```markdown
# Turing Test Evaluation & CAPTCHA System

A dual-purpose web prototype designed to explore the boundaries of **AI agency**, **human–machine indistinguishability**, and **automated verification**.

**Live Demo:** https://turingprototype.vercel.app/

---

# 🚀 Overview

This project serves as a practical implementation of two core AI concepts:

### CAPTCHA
An **Inverted Turing Test** where a machine determines whether a user is human.

### Turing Test
A **double-blind evaluation** where a human judge attempts to distinguish between:

- a real human conversation
- an AI-generated conversation

The system measures the **AI Fooling Rate** to determine whether the integrated LLM agent can successfully imitate human conversation in a text-based environment.

---

# 🏗️ System Architecture

The application follows a **four-layer modular architecture**.

---

## 1. Security Layer (Gatekeeper)

This layer ensures that the evaluator is a human participant.

- Uses a **CAPTCHA challenge**
- Prevents automated bots from entering the system
- Protects the integrity of experiment results

Without this step, automated scripts could artificially influence the **AI Fooling Rate**.

---

## 2. Perception Layer (Double-Blind Interface)

This layer presents the conversations to the evaluator.

Features:

- Two chat panels: **Chat A** and **Chat B**
- Identical UI design
- Same typography and styling
- No metadata or identifiers

Because both chats look identical, the evaluator must rely **only on linguistic cues and conversational behavior**.

This creates a **true double-blind environment**.

---

## 3. Knowledge & Generation Layer (AI Wrapper)

This layer produces the conversations used in the experiment.

### Ground Truth Dataset

A curated dataset of **real human chat conversations**.

These conversations act as the **control group** in the experiment.

---

### AI Wrapper

A lightweight interface that connects the system to an external AI model.

The wrapper:

- Sends prompts to the LLM
- Receives responses
- Formats them as human-like chat messages
- Controls tone and style

The system uses:

**Model:** Gemini 2.5 Flash  
**API:** Gemini API

Prompt engineering is used to simulate human conversation traits such as:

- lowercase typing
- informal language
- slang (e.g., *lol*, *idk*)
- imperfect grammar
- small conversational inconsistencies

These traits help the AI appear more human-like.

---

## 4. Analytics Layer (Scoring)

This layer evaluates the results of the Turing Test.

The system tracks user guesses and computes the **AI Fooling Rate**.

### Storage
Results are stored locally using **browser localStorage**.

### Metric

```

Fooling Rate = (Incorrect Guesses / Total Tests) * 100

```

### Decision Threshold

If:

```

Fooling Rate ≥ 50%

```

The AI is considered to have **passed the Turing Test** for that evaluation set.

A 50% rate indicates humans cannot distinguish the AI better than **random guessing**.

---

# 🛠️ Technical Stack

| Component | Technology |
|----------|------------|
| Frontend | HTML5 |
| Styling | CSS3 + Tailwind CSS |
| Logic | Vanilla JavaScript |
| Icons | Lucide-react |
| AI Model | Gemini 2.5 Flash API |
| Storage | Browser localStorage |

---

# 📝 Prototype Limitations & Research Value

This project is a **functional prototype**.

It demonstrates the **conceptual implementation of the Turing Test**, not a rigorous scientific evaluation.

### Dataset Limitation
The system uses a **small dataset of human chat logs** for demonstration purposes.

### Stateless AI
The AI agent currently has **no episodic memory** and does not remember previous interactions.

Each conversation is generated independently.

### Rationality vs Omniscience

The system highlights a key AI concept:

Passing the **Turing Test** requires **rational human-like behavior**, not **omniscience**.

An AI does not need to know everything.  
It only needs to behave convincingly human.

---

# 🚦 Getting Started

### 1. Clone the Repository

```

git clone [https://github.com/your-username/turing-test-prototype.git](https://github.com/your-username/turing-test-prototype.git)

```

---

### 2. Open the Project

Open:

```

index.html

```

The project runs **entirely in the browser**.

---

### 3. Add API Key

Insert a valid **Gemini API key** inside the script:

```

const apiKey = "YOUR_GEMINI_API_KEY";

```

---

# 📈 Evaluation Result

At the end of the experiment the system evaluates the AI.

### FAIL
Humans can reliably identify the AI conversation.

### PASS
Humans cannot distinguish the AI from the human dataset better than random chance.

When the **Fooling Rate ≥ 50%**, the AI is considered to have **passed the Turing Test** within this experimental environment.
```
