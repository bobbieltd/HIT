// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2018, The DeroGold Association
// 
// Please see the included LICENSE file for more information.

#include <stdint.h>
#include <vector>

uint64_t nextDifficultyV6(std::vector<uint64_t> timestamps, std::vector<uint64_t> cumulativeDifficulties);

uint64_t nextDifficultyV5(std::vector<uint64_t> timestamps, std::vector<uint64_t> cumulativeDifficulties);

uint64_t nextDifficultyV4(std::vector<uint64_t> timestamps, std::vector<uint64_t> cumulativeDifficulties);

uint64_t nextDifficultyV3(std::vector<uint64_t> timestamps, std::vector<uint64_t> cumulativeDifficulties);

uint64_t nextDifficulty(std::vector<uint64_t> timestamps, std::vector<uint64_t> cumulativeDifficulties, const uint64_t blockHeight);
