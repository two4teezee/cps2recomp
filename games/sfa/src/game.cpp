// SPDX-License-Identifier: GPL-3.0-only
// Copyright (C) 2026 two4teezee
//
// Street Fighter Alpha: what the game's own sources add to the port (see PROGRESS.md).
#include "game.h"

namespace cps2recomp {

void RegisterCoins(); // coins.cpp
void CoinsFrame(Machine &machine);

void RegisterGame() {
    RegisterCoins();
    TheGame().frame = [](Machine &machine) {
        CoinsFrame(machine);
    };
}

} // namespace cps2recomp
