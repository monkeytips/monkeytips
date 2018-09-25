// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2014-2018, The Monero Project
// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information.

#pragma once

#include <cstddef>
#include <cstdint>
#include <limits>
#include <initializer_list>

namespace CryptoNote {
namespace parameters {

const uint64_t DIFFICULTY_TARGET                             = 45; // seconds

const uint32_t CRYPTONOTE_MAX_BLOCK_NUMBER                   = 500000000;
const size_t   CRYPTONOTE_MAX_BLOCK_BLOB_SIZE                = 500000000;
const size_t   CRYPTONOTE_MAX_TX_SIZE                        = 1000000000;
const uint64_t CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX       = 341640118875;
const uint32_t CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW          = 40;
const uint64_t CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT            = 60 * 60 * 2;
const uint64_t CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT_V3         = 3 * DIFFICULTY_TARGET;
const uint64_t CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT_V4         = 6 * DIFFICULTY_TARGET;

const size_t   BLOCKCHAIN_TIMESTAMP_CHECK_WINDOW             = 60;
const size_t   BLOCKCHAIN_TIMESTAMP_CHECK_WINDOW_V3          = 11;

// MONEY_SUPPLY - total number coins to be generated
const uint64_t MONEY_SUPPLY                                  = UINT64_C(25000000000);
const uint32_t ZAWY_DIFFICULTY_BLOCK_INDEX                   = 187000;
const size_t ZAWY_DIFFICULTY_V2                              = 0;
const uint8_t ZAWY_DIFFICULTY_DIFFICULTY_BLOCK_VERSION       = 3;

const uint64_t LWMA_2_DIFFICULTY_BLOCK_INDEX                 = 40;
const uint64_t LWMA_2_DIFFICULTY_BLOCK_INDEX_V2              = 77000;
const uint64_t LWMA_2_DIFFICULTY_BLOCK_INDEX_V3              = 500000;
const uint64_t FUSION_DUST_THRESHOLD_HEIGHT_V2               = 500000;

const uint64_t DIFFICULTY_WINDOW_V3                          = 60;
const uint64_t DIFFICULTY_BLOCKS_COUNT_V3                    = DIFFICULTY_WINDOW_V3 + 1;

const unsigned EMISSION_SPEED_FACTOR                         = 17;
const unsigned EMISSION_SPEED_FACTOR_V2                      = 19;

static_assert(EMISSION_SPEED_FACTOR <= 8 * sizeof(uint64_t), "Bad EMISSION_SPEED_FACTOR");
static_assert(EMISSION_SPEED_FACTOR_V2 <= 8 * sizeof(uint64_t), "Bad EMISSION_SPEED_FACTOR");

const uint64_t EMISSION_SPEED_V2_HEIGHT                      = 77000;

const uint64_t GENESIS_BLOCK_REWARD                          = UINT64_C(2000000000);

const size_t   CRYPTONOTE_REWARD_BLOCKS_WINDOW               = 100;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE     = 100000; //size of block (bytes) after which reward for block calculated using block size
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V2  = 20000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V1  = 10000;
const size_t   CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE;
const size_t   CRYPTONOTE_COINBASE_BLOB_RESERVED_SIZE        = 600;
const size_t   CRYPTONOTE_DISPLAY_DECIMAL_POINT              = 2;
const uint64_t MINIMUM_FEE                                   = UINT64_C(10);

const uint64_t MINIMUM_MIXIN_V1                              = 0;
const uint64_t MAXIMUM_MIXIN_V1                              = 7;
const uint64_t MINIMUM_MIXIN_V2                              = 7;
const uint64_t MAXIMUM_MIXIN_V2                              = 7;
const uint64_t MINIMUM_MIXIN_V3                              = 0;
const uint64_t MAXIMUM_MIXIN_V3                              = 7;
const uint64_t MINIMUM_MIXIN_V4                              = 3;
const uint64_t MAXIMUM_MIXIN_V4                              = 3;

const uint32_t MIXIN_LIMITS_V1_HEIGHT                        = 40;
const uint32_t MIXIN_LIMITS_V2_HEIGHT                        = 60;
const uint32_t MIXIN_LIMITS_V3_HEIGHT                        = 101000;
const uint32_t MIXIN_LIMITS_V4_HEIGHT                        = 170000;

const uint64_t DEFAULT_MIXIN                                 = MAXIMUM_MIXIN_V4;

const uint64_t DEFAULT_DUST_THRESHOLD                        = UINT64_C(10);
const uint64_t DEFAULT_DUST_THRESHOLD_V2                     = UINT64_C(10);

const uint32_t DUST_THRESHOLD_V2_HEIGHT                      = MIXIN_LIMITS_V3_HEIGHT;

const uint64_t EXPECTED_NUMBER_OF_BLOCKS_PER_DAY             = 24 * 60 * 60 / DIFFICULTY_TARGET;
const size_t   DIFFICULTY_WINDOW                             = 17;
const size_t   DIFFICULTY_WINDOW_V1                          = 2880;
const size_t   DIFFICULTY_WINDOW_V2                          = 2880;
const size_t   DIFFICULTY_CUT                                = 0;  // timestamps to cut after sorting
const size_t   DIFFICULTY_CUT_V1                             = 60;
const size_t   DIFFICULTY_CUT_V2                             = 60;
const size_t   DIFFICULTY_LAG                                = 0;  // !!!
const size_t   DIFFICULTY_LAG_V1                             = 15;
const size_t   DIFFICULTY_LAG_V2                             = 15;
static_assert(2 * DIFFICULTY_CUT <= DIFFICULTY_WINDOW - 2, "Bad DIFFICULTY_WINDOW or DIFFICULTY_CUT");

const size_t   MAX_BLOCK_SIZE_INITIAL                        = 100000;
const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_NUMERATOR         = 100 * 1024;
const uint64_t MAX_BLOCK_SIZE_GROWTH_SPEED_DENOMINATOR       = 365 * 24 * 60 * 60 / DIFFICULTY_TARGET;
const uint64_t MAX_EXTRA_SIZE                                = 140000;

const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS     = 1;
const uint64_t CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_SECONDS    = DIFFICULTY_TARGET * CRYPTONOTE_LOCKED_TX_ALLOWED_DELTA_BLOCKS;

const uint64_t CRYPTONOTE_MEMPOOL_TX_LIVETIME                = 60 * 60 * 24;     //seconds, one day
const uint64_t CRYPTONOTE_MEMPOOL_TX_FROM_ALT_BLOCK_LIVETIME = 60 * 60 * 24 * 7; //seconds, one week
const uint64_t CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL = 7;  // CRYPTONOTE_NUMBER_OF_PERIODS_TO_FORGET_TX_DELETED_FROM_POOL * CRYPTONOTE_MEMPOOL_TX_LIVETIME = time to forget tx

const size_t   FUSION_TX_MAX_SIZE                            = CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_CURRENT * 30 / 100;
const size_t   FUSION_TX_MIN_INPUT_COUNT                     = 12;
const size_t   FUSION_TX_MIN_IN_OUT_COUNT_RATIO              = 4;

const uint32_t KEY_IMAGE_CHECKING_BLOCK_INDEX                = 0;
const uint32_t UPGRADE_HEIGHT_V2                             = 1;
const uint32_t UPGRADE_HEIGHT_V3                             = 2;
const uint32_t UPGRADE_HEIGHT_V4                             = 3; // Upgrade height for CN-Lite Variant 1 switch.
const uint32_t UPGRADE_HEIGHT_CURRENT                        = UPGRADE_HEIGHT_V4;
const unsigned UPGRADE_VOTING_THRESHOLD                      = 90;               // percent
const uint32_t UPGRADE_VOTING_WINDOW                         = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;  // blocks
const uint32_t UPGRADE_WINDOW                                = EXPECTED_NUMBER_OF_BLOCKS_PER_DAY;  // blocks
static_assert(0 < UPGRADE_VOTING_THRESHOLD && UPGRADE_VOTING_THRESHOLD <= 100, "Bad UPGRADE_VOTING_THRESHOLD");
static_assert(UPGRADE_VOTING_WINDOW > 1, "Bad UPGRADE_VOTING_WINDOW");

/* The index in the FORK_HEIGHTS array that this version of the software will
   support. For example, if CURRENT_FORK_INDEX is 3, this version of the
   software will support the fork at 600,000 blocks. */
const uint8_t CURRENT_FORK_INDEX = 4;

/* Block heights we are going to have hard forks at */
const uint64_t FORK_HEIGHTS[] = {
    101000,
    170000,
    250000,
    440000,
    620000,
    800000,
    1000000,
    1200000,
    1400000
};

/* Make sure CURRENT_FORK_INDEX is a valid index */
static_assert(CURRENT_FORK_INDEX < (sizeof(FORK_HEIGHTS)/sizeof(*FORK_HEIGHTS)), "CURRENT_FORK_INDEX out of range of FORK_HEIGHTS!");

const char     CRYPTONOTE_BLOCKS_FILENAME[]                  = "blocks.bin";
const char     CRYPTONOTE_BLOCKINDEXES_FILENAME[]            = "blockindexes.bin";
const char     CRYPTONOTE_POOLDATA_FILENAME[]                = "poolstate.bin";
const char     P2P_NET_DATA_FILENAME[]                       = "p2pstate.bin";
const char     MINER_CONFIG_FILE_NAME[]                      = "miner_conf.json";
} // parameters

const char     CRYPTONOTE_NAME[]                             = "monkeytips";
const char     GENESIS_COINBASE_TX_HEX[]                     = "012801ff000180a8d6b907022bfdeeee6f2d6ab60a0b67a7d504192a5e851b71174098f719363346697c4f79210115dcc364197ec66ce30c8e6fb1ca237b38162324c904f97eb4d21fc899426e3c";
const uint64_t GENESIS_BLOCK_TIMESTAMP                       = 1530327904;

const uint8_t  TRANSACTION_VERSION_1                         =  1;
const uint8_t  TRANSACTION_VERSION_2                         =  2;
const uint8_t  CURRENT_TRANSACTION_VERSION                   =  TRANSACTION_VERSION_1;
const uint8_t  BLOCK_MAJOR_VERSION_1                         =  1;
const uint8_t  BLOCK_MAJOR_VERSION_2                         =  2;
const uint8_t  BLOCK_MAJOR_VERSION_3                         =  3;
const uint8_t  BLOCK_MAJOR_VERSION_4                         =  4;
const uint8_t  BLOCK_MINOR_VERSION_0                         =  0;
const uint8_t  BLOCK_MINOR_VERSION_1                         =  1;

const size_t   BLOCKS_IDS_SYNCHRONIZING_DEFAULT_COUNT        =  10000;  //by default, blocks ids count in synchronizing
const size_t   BLOCKS_SYNCHRONIZING_DEFAULT_COUNT            =  100;    //by default, blocks count in blocks downloading
const size_t   COMMAND_RPC_GET_BLOCKS_FAST_MAX_COUNT         =  1000;

const int      P2P_DEFAULT_PORT                              =  13001;
const int      RPC_DEFAULT_PORT                              =  13002;
const int      SERVICE_DEFAULT_PORT                          =  8420;
const char     LATEST_VERSION_URL[]                          = "http://monkeytips.top";

const uint8_t  P2P_CURRENT_VERSION                           = 2;
const uint8_t  P2P_MINIMUM_VERSION                           = 1;
// This defines the number of versions ahead we must see peers before we start displaying
// warning messages that we need to upgrade our software.
const uint8_t  P2P_UPGRADE_WINDOW                            = 2;

const size_t   P2P_LOCAL_WHITE_PEERLIST_LIMIT                =  1000;
const size_t   P2P_LOCAL_GRAY_PEERLIST_LIMIT                 =  5000;

const size_t   P2P_CONNECTION_MAX_WRITE_BUFFER_SIZE          = 32 * 1024 * 1024; // 32 MB
const uint32_t P2P_DEFAULT_CONNECTIONS_COUNT                 = 8;
const size_t   P2P_DEFAULT_WHITELIST_CONNECTIONS_PERCENT     = 70;
const uint32_t P2P_DEFAULT_HANDSHAKE_INTERVAL                = 60;            // seconds
const uint32_t P2P_DEFAULT_PACKET_MAX_SIZE                   = 50000000;      // 50000000 bytes maximum packet size
const uint32_t P2P_DEFAULT_PEERS_IN_HANDSHAKE                = 250;
const uint32_t P2P_DEFAULT_CONNECTION_TIMEOUT                = 5000;          // 5 seconds
const uint32_t P2P_DEFAULT_PING_CONNECTION_TIMEOUT           = 2000;          // 2 seconds
const uint64_t P2P_DEFAULT_INVOKE_TIMEOUT                    = 60 * 2 * 1000; // 2 minutes
const size_t   P2P_DEFAULT_HANDSHAKE_INVOKE_TIMEOUT          = 5000;          // 5 seconds
const char     P2P_STAT_TRUSTED_PUB_KEY[]                    = "";
const static   CRYPTONOTE_NETWORK                            =
{
    {  0x5c, 0x7a, 0x51, 0xcf, 0x21, 0xd3, 0xa4, 0x6f, 0xf2, 0xb3, 0x22, 0xa5, 0xb3, 0x74, 0xe4, 0x17  }
};

const char* const SEED_NODES[] = {
  "35.237.212.180:13001",
  "35.190.197.131:13001",
  "seed-mtip-0.triforcecoin.com:13001",
  "seed-mtip-1.triforcecoin.com:13001",
  "35.237.5.160:13001",
  "104.155.39.18:13001",
  "45.76.3.17:13001",
  "149.28.102.229:13001"
};
} // CryptoNote