# CPS-2 Recomp: context

Kept on the two4teezee fork only; not part of upstream pull requests.

## Language

**Game**:
One arcade title ported in this repository, with its own folder `games/<id>/`.
_Avoid_: title, port (when the folder is meant)

**ROM set**:
The files of one revision of a game as arcade collections name them (`sfa`, `sfa3`, `sfa2u`), its key file included. A game works with exactly one ROM set.
_Avoid_: ROM, dump

**Revision**:
Which release of a game a ROM set holds, named by region and date (Europe 950727).
_Avoid_: version

**Key file**:
The board's cipher key that comes with a ROM set; the program cannot be deciphered without it.

**Family**:
Games made by Capcom from one program, changed here and there; the later game builds the first game's sources (`sources = <id>`) and says in `family.h` what is its own.
_Avoid_: variant, clone

**Playable port**:
The first bar a new game reaches: it boots, plays from start to ending, no code falls back to the interpreter, the toolkit's checks pass, and it has the features every game shares; no training mode or other features of its own yet.
_Avoid_: MVP, done

**Ticket**:
A GitHub issue on the two4teezee fork for one step of a game's work, grouped in a milestone per game.
_Avoid_: task, story

**Test plan**:
The checklist in a ticket's body, in two parts: the headless checks Claude runs, with what passes, and the checks the contributor runs in a window, with what fails.

## Relationships

- A **Game** has exactly one **ROM set**, of one **Revision**
- A **Game** in a **Family** builds the first game's sources
- A **Game** reaches **Playable port** through a milestone of **Tickets**, each with one **Test plan**

## Flagged ambiguities

- "ticket" could have meant an upstream issue: resolved, a ticket lives on the fork; upstream gets one announcement issue and one pull request per game.
