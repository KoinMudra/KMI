

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *koinmudra_strings[] = {
QT_TRANSLATE_NOOP("koinmudra", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("koinmudra", ""
"An error occurred while setting up the RPC address %s port %u for listening: "
"%s"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Bind to given address to listen for JSON-RPC connections. Use [host]:port "
"notation for IPv6. This option can be specified multiple times (default: "
"bind to all interfaces)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Cannot obtain a lock on data directory %s. KoinMudra is probably already "
"running."),
QT_TRANSLATE_NOOP("koinmudra", ""
"Change automatic finalized budget voting behavior. mode=auto: Vote for only "
"exact finalized budget match to my generated budget. (string, default: auto)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Continuously rate-limit free transactions to <n>*1000 bytes per minute "
"(default:%u)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Disable all Koinmudra specific functionality (Masternodes, SwiftTX, "
"Budgeting) (0-1, default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Distributed under the MIT software license, see the accompanying file "
"COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
QT_TRANSLATE_NOOP("koinmudra", ""
"Enable SwiftTX, show confirmations for locked transactions (bool, default: %s)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Enable spork administration functionality with the appropriate private key."),
QT_TRANSLATE_NOOP("koinmudra", ""
"Enter regression test mode, which uses a special chain in which blocks can "
"be solved instantly."),
QT_TRANSLATE_NOOP("koinmudra", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Error: The transaction was rejected! This might happen if some of the coins "
"in your wallet were already spent, such as if you used a copy of wallet.dat "
"and coins were spent in the copy but not marked as spent here."),
QT_TRANSLATE_NOOP("koinmudra", ""
"Error: This transaction requires a transaction fee of at least %s because of "
"its amount, complexity, or use of recently received funds!"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Error: Unsupported argument -checklevel found. Checklevel must be level 4."),
QT_TRANSLATE_NOOP("koinmudra", ""
"Error: Unsupported argument -socks found. Setting SOCKS version isn't "
"possible anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("koinmudra", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Fees (in KMI/Kb) smaller than this are considered zero fee for relaying "
"(default: %s)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Fees (in KMI/Kb) smaller than this are considered zero fee for transaction "
"creation (default: %s)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Flush database activity from memory pool to disk log every <n> megabytes "
"(default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"If paytxfee is not set, include enough fee so transactions begin "
"confirmation on average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"In this mode -genproclimit controls how many blocks are generated "
"immediately."),
QT_TRANSLATE_NOOP("koinmudra", ""
"Insufficient or insufficient confirmed funds, you might need to wait a few "
"minutes and try again."),
QT_TRANSLATE_NOOP("koinmudra", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Keep the specified amount available for spending at all times (default: 0)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Log transaction priority and fee per kB when mining blocks (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Maximum size of data in data carrier transactions we relay and mine "
"(default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Maximum total fees to use in a single wallet transaction, setting too low "
"may abort large transactions (default: %s)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Randomize credentials for every proxy connection. This enables Tor stream "
"isolation (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Require high priority for relaying free or low-fee transactions (default:%u)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Send trace/debug info to console instead of debug.log file (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Set the number of threads for coin generation if enabled (-1 = all cores, "
"default: %d)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Show N confirmations for a successfully locked transaction (0-9999, default: "
"%u)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Support filtering of blocks and transaction with bloom filters (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"SwiftTX requires inputs with at least 6 confirmations, you might need to wait "
"a few minutes and try again."),
QT_TRANSLATE_NOOP("koinmudra", ""
"This is a pre-release test build - use at your own risk - do not use for "
"staking or merchant applications!"),
QT_TRANSLATE_NOOP("koinmudra", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit <https://www.openssl.org/> and cryptographic software "
"written by Eric Young and UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("koinmudra", ""
"To use koinmudrad, or the -server option to koinmudra-qt, you must set an rpcpassword "
"in the configuration file:\n"
"%s\n"
"It is recommended you use the following random password:\n"
"rpcuser=koinmudrarpc\n"
"rpcpassword=%s\n"
"(you do not need to remember this password)\n"
"The username and password MUST NOT be the same.\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions.\n"
"It is also recommended to set alertnotify so you are notified of problems;\n"
"for example: alertnotify=echo %%s | mail -s \"Koinmudra Alert\" admin@foo.com\n"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Unable to bind to %s on this computer. KoinMudra is probably already running."),
QT_TRANSLATE_NOOP("koinmudra", ""
"Unable to locate enough funds for this transaction that are not equal 1000 "
"KMI."),
QT_TRANSLATE_NOOP("koinmudra", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("koinmudra", ""
"Warning: -maxtxfee is set very high! Fees this large could be paid on a "
"single transaction."),
QT_TRANSLATE_NOOP("koinmudra", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("koinmudra", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong KoinMudra will not work properly."),
QT_TRANSLATE_NOOP("koinmudra", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("koinmudra", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("koinmudra", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("koinmudra", ""
"Warning: wallet.dat corrupt, data koinmudrad! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("koinmudra", ""
"Whitelist peers connecting from the given netmask or IP address. Can be "
"specified multiple times."),
QT_TRANSLATE_NOOP("koinmudra", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("koinmudra", ""
"You must specify a masternodeprivkey in the configuration. Please see "
"documentation for help."),
QT_TRANSLATE_NOOP("koinmudra", "(40009 could be used only on mainnet)"),
QT_TRANSLATE_NOOP("koinmudra", "(default: %s)"),
QT_TRANSLATE_NOOP("koinmudra", "(default: 1)"),
QT_TRANSLATE_NOOP("koinmudra", "(must be 40009 for mainnet)"),
QT_TRANSLATE_NOOP("koinmudra", "<category> can be:"),
QT_TRANSLATE_NOOP("koinmudra", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("koinmudra", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("koinmudra", "Accept public REST requests (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Acceptable ciphers (default: %s)"),
QT_TRANSLATE_NOOP("koinmudra", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("koinmudra", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("koinmudra", "Already have that input."),
QT_TRANSLATE_NOOP("koinmudra", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Attempt to force blockchain corruption recovery"),
QT_TRANSLATE_NOOP("koinmudra", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("koinmudra", "Automatically create Tor hidden service (default: %d)"),
QT_TRANSLATE_NOOP("koinmudra", "Block creation options:"),
QT_TRANSLATE_NOOP("koinmudra", "Can't find random Masternode."),
QT_TRANSLATE_NOOP("koinmudra", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("koinmudra", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("koinmudra", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("koinmudra", "Cannot resolve -whitebind address: '%s'"),
QT_TRANSLATE_NOOP("koinmudra", "Cannot write default address"),
QT_TRANSLATE_NOOP("koinmudra", "Collateral not valid."),
QT_TRANSLATE_NOOP("koinmudra", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("koinmudra", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("koinmudra", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("koinmudra", "Connection options:"),
QT_TRANSLATE_NOOP("koinmudra", "Copyright (C) 2009-%i The Bitcoin Core Developers"),
QT_TRANSLATE_NOOP("koinmudra", "Copyright (C) 2014-%i The Dash Core Developers"),
QT_TRANSLATE_NOOP("koinmudra", "Copyright (C) 2015-%i The PIVX Core Developers"),
QT_TRANSLATE_NOOP("koinmudra", "Copyright (C) %i The KoinMudra Developers"),
QT_TRANSLATE_NOOP("koinmudra", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("koinmudra", "Could not parse -rpcbind value %s as network address"),
QT_TRANSLATE_NOOP("koinmudra", "Could not parse masternode.conf"),
QT_TRANSLATE_NOOP("koinmudra", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("koinmudra", "Delete blockchain folders and resync from scratch"),
QT_TRANSLATE_NOOP("koinmudra", "Disable OS notifications for incoming transactions (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Disable safemode, override a real safe mode event (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("koinmudra", "Display the stake modifier calculations in the debug.log file."),
QT_TRANSLATE_NOOP("koinmudra", "Display verbose coin stake messages in the debug.log file."),
QT_TRANSLATE_NOOP("koinmudra", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("koinmudra", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("koinmudra", "Done loading"),
QT_TRANSLATE_NOOP("koinmudra", "Enable publish hash block in <address>"),
QT_TRANSLATE_NOOP("koinmudra", "Enable publish hash transaction (locked via SwiftTX) in <address>"),
QT_TRANSLATE_NOOP("koinmudra", "Enable publish hash transaction in <address>"),
QT_TRANSLATE_NOOP("koinmudra", "Enable publish raw block in <address>"),
QT_TRANSLATE_NOOP("koinmudra", "Enable publish raw transaction (locked via SwiftTX) in <address>"),
QT_TRANSLATE_NOOP("koinmudra", "Enable publish raw transaction in <address>"),
QT_TRANSLATE_NOOP("koinmudra", "Enable staking functionality (0-1, default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Enable the client to act as a masternode (0-1, default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Entries are full."),
QT_TRANSLATE_NOOP("koinmudra", "Error connecting to Masternode."),
QT_TRANSLATE_NOOP("koinmudra", "Error initializing block database"),
QT_TRANSLATE_NOOP("koinmudra", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("koinmudra", "Error loading block database"),
QT_TRANSLATE_NOOP("koinmudra", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("koinmudra", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("koinmudra", "Error loading wallet.dat: Wallet requires newer version of KoinMudra"),
QT_TRANSLATE_NOOP("koinmudra", "Error opening block database"),
QT_TRANSLATE_NOOP("koinmudra", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("koinmudra", "Error recovering public key."),
QT_TRANSLATE_NOOP("koinmudra", "Error"),
QT_TRANSLATE_NOOP("koinmudra", "Error: A fatal internal error occured, see debug.log for details"),
QT_TRANSLATE_NOOP("koinmudra", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("koinmudra", "Error: Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("koinmudra", "Error: Wallet locked, unable to create transaction!"),
QT_TRANSLATE_NOOP("koinmudra", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("koinmudra", "Failed to read block index"),
QT_TRANSLATE_NOOP("koinmudra", "Failed to read block"),
QT_TRANSLATE_NOOP("koinmudra", "Failed to write block index"),
QT_TRANSLATE_NOOP("koinmudra", "Fee (in KMI/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("koinmudra", "Finalizing transaction."),
QT_TRANSLATE_NOOP("koinmudra", "Force safe mode (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Found enough users, signing ( waiting %s )"),
QT_TRANSLATE_NOOP("koinmudra", "Found enough users, signing ..."),
QT_TRANSLATE_NOOP("koinmudra", "Generate coins (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("koinmudra", "If <category> is not supplied, output all debugging information."),
QT_TRANSLATE_NOOP("koinmudra", "Importing..."),
QT_TRANSLATE_NOOP("koinmudra", "Imports blocks from external blk000??.dat file"),
QT_TRANSLATE_NOOP("koinmudra", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Incompatible mode."),
QT_TRANSLATE_NOOP("koinmudra", "Incompatible version."),
QT_TRANSLATE_NOOP("koinmudra", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("koinmudra", "Information"),
QT_TRANSLATE_NOOP("koinmudra", "Initialization sanity check failed. KoinMudra is shutting down."),
QT_TRANSLATE_NOOP("koinmudra", "Input is not valid."),
QT_TRANSLATE_NOOP("koinmudra", "Insufficient funds"),
QT_TRANSLATE_NOOP("koinmudra", "Insufficient funds."),
QT_TRANSLATE_NOOP("koinmudra", "Invalid -onion address or hostname: '%s'"),
QT_TRANSLATE_NOOP("koinmudra", "Invalid -proxy address or hostname: '%s'"),
QT_TRANSLATE_NOOP("koinmudra", "Invalid amount for -maxtxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("koinmudra", "Invalid amount for -minrelaytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("koinmudra", "Invalid amount for -mintxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("koinmudra", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("koinmudra", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("koinmudra", "Invalid amount for -reservebalance=<amount>"),
QT_TRANSLATE_NOOP("koinmudra", "Invalid amount"),
QT_TRANSLATE_NOOP("koinmudra", "Invalid masternodeprivkey. Please see documenation."),
QT_TRANSLATE_NOOP("koinmudra", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("koinmudra", "Invalid port detected in masternode.conf"),
QT_TRANSLATE_NOOP("koinmudra", "Invalid private key."),
QT_TRANSLATE_NOOP("koinmudra", "Invalid script detected."),
QT_TRANSLATE_NOOP("koinmudra", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Limit size of signature cache to <n> entries (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Line: %d"),
QT_TRANSLATE_NOOP("koinmudra", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Loading addresses..."),
QT_TRANSLATE_NOOP("koinmudra", "Loading block index..."),
QT_TRANSLATE_NOOP("koinmudra", "Loading budget cache..."),
QT_TRANSLATE_NOOP("koinmudra", "Loading masternode cache..."),
QT_TRANSLATE_NOOP("koinmudra", "Loading masternode payment cache..."),
QT_TRANSLATE_NOOP("koinmudra", "Loading sporks..."),
QT_TRANSLATE_NOOP("koinmudra", "Loading wallet... (%3.2f %%)"),
QT_TRANSLATE_NOOP("koinmudra", "Loading wallet..."),
QT_TRANSLATE_NOOP("koinmudra", "Lock is already in place."),
QT_TRANSLATE_NOOP("koinmudra", "Lock masternodes from masternode configuration file (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Maintain at most <n> connections to peers (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Masternode options:"),
QT_TRANSLATE_NOOP("koinmudra", "Masternode queue is full."),
QT_TRANSLATE_NOOP("koinmudra", "Masternode:"),
QT_TRANSLATE_NOOP("koinmudra", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Missing input transaction information."),
QT_TRANSLATE_NOOP("koinmudra", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("koinmudra", "No Masternodes detected."),
QT_TRANSLATE_NOOP("koinmudra", "No compatible Masternode found."),
QT_TRANSLATE_NOOP("koinmudra", "Node relay options:"),
QT_TRANSLATE_NOOP("koinmudra", "Non-standard public key detected."),
QT_TRANSLATE_NOOP("koinmudra", "Not compatible with existing transactions."),
QT_TRANSLATE_NOOP("koinmudra", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("koinmudra", "Not in the Masternode list."),
QT_TRANSLATE_NOOP("koinmudra", "Number of automatic wallet backups (default: 10)"),
QT_TRANSLATE_NOOP("koinmudra", "Only accept block chain matching built-in checkpoints (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("koinmudra", "Options:"),
QT_TRANSLATE_NOOP("koinmudra", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("koinmudra", "Preparing for resync..."),
QT_TRANSLATE_NOOP("koinmudra", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Print version and exit"),
QT_TRANSLATE_NOOP("koinmudra", "RPC SSL options: (see the Bitcoin Wiki for SSL setup instructions)"),
QT_TRANSLATE_NOOP("koinmudra", "RPC server options:"),
QT_TRANSLATE_NOOP("koinmudra", "RPC support for HTTP persistent connections (default: %d)"),
QT_TRANSLATE_NOOP("koinmudra", "Randomly drop 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("koinmudra", "Randomly fuzz 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("koinmudra", "Rebuild block chain index from current blk000??.dat files"),
QT_TRANSLATE_NOOP("koinmudra", "Receive and display P2P network alerts (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("koinmudra", "Rescanning..."),
QT_TRANSLATE_NOOP("koinmudra", "Run a thread to flush wallet periodically (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("koinmudra", "Send transactions as zero-fee transactions if possible (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Server certificate file (default: %s)"),
QT_TRANSLATE_NOOP("koinmudra", "Server private key (default: %s)"),
QT_TRANSLATE_NOOP("koinmudra", "Session not complete!"),
QT_TRANSLATE_NOOP("koinmudra", "Session timed out."),
QT_TRANSLATE_NOOP("koinmudra", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("koinmudra", "Set external address:port to get to this masternode (example: %s)"),
QT_TRANSLATE_NOOP("koinmudra", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("koinmudra", "Set minimum block size in bytes (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Set the Maximum reorg depth (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Set the masternode private key"),
QT_TRANSLATE_NOOP("koinmudra", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("koinmudra", "Sets the DB_PRIVATE flag in the wallet db environment (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("koinmudra", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("koinmudra", "Signing failed."),
QT_TRANSLATE_NOOP("koinmudra", "Signing timed out."),
QT_TRANSLATE_NOOP("koinmudra", "Signing transaction failed"),
QT_TRANSLATE_NOOP("koinmudra", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("koinmudra", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("koinmudra", "Specify data directory"),
QT_TRANSLATE_NOOP("koinmudra", "Specify masternode configuration file (default: %s)"),
QT_TRANSLATE_NOOP("koinmudra", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("koinmudra", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("koinmudra", "Specify your own public address"),
QT_TRANSLATE_NOOP("koinmudra", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Staking options:"),
QT_TRANSLATE_NOOP("koinmudra", "Stop running after importing blocks from disk (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Submitted following entries to masternode: %u / %d"),
QT_TRANSLATE_NOOP("koinmudra", "Submitted to masternode, waiting for more entries ( %u / %d ) %s"),
QT_TRANSLATE_NOOP("koinmudra", "Submitted to masternode, waiting in queue %s"),
QT_TRANSLATE_NOOP("koinmudra", "SwiftTX options:"),
QT_TRANSLATE_NOOP("koinmudra", "Synchronization failed"),
QT_TRANSLATE_NOOP("koinmudra", "Synchronization finished"),
QT_TRANSLATE_NOOP("koinmudra", "Synchronization pending..."),
QT_TRANSLATE_NOOP("koinmudra", "Synchronizing budgets..."),
QT_TRANSLATE_NOOP("koinmudra", "Synchronizing masternode winners..."),
QT_TRANSLATE_NOOP("koinmudra", "Synchronizing masternodes..."),
QT_TRANSLATE_NOOP("koinmudra", "Synchronizing sporks..."),
QT_TRANSLATE_NOOP("koinmudra", "This help message"),
QT_TRANSLATE_NOOP("koinmudra", "This is experimental software."),
QT_TRANSLATE_NOOP("koinmudra", "This is intended for regression testing tools and app development."),
QT_TRANSLATE_NOOP("koinmudra", "This is not a Masternode."),
QT_TRANSLATE_NOOP("koinmudra", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Tor control port password (default: empty)"),
QT_TRANSLATE_NOOP("koinmudra", "Tor control port to use if onion listening enabled (default: %s)"),
QT_TRANSLATE_NOOP("koinmudra", "Transaction amount too small"),
QT_TRANSLATE_NOOP("koinmudra", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("koinmudra", "Transaction created successfully."),
QT_TRANSLATE_NOOP("koinmudra", "Transaction fees are too high."),
QT_TRANSLATE_NOOP("koinmudra", "Transaction not valid."),
QT_TRANSLATE_NOOP("koinmudra", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("koinmudra", "Transaction too large"),
QT_TRANSLATE_NOOP("koinmudra", "Transmitting final transaction."),
QT_TRANSLATE_NOOP("koinmudra", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("koinmudra", "Unable to sign spork message, wrong key?"),
QT_TRANSLATE_NOOP("koinmudra", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("koinmudra", "Unknown state: id = %u"),
QT_TRANSLATE_NOOP("koinmudra", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("koinmudra", "Use OpenSSL (https) for JSON-RPC connections"),
QT_TRANSLATE_NOOP("koinmudra", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("koinmudra", "Use a custom max chain reorganization depth (default: %u)"),
QT_TRANSLATE_NOOP("koinmudra", "Use the test network"),
QT_TRANSLATE_NOOP("koinmudra", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("koinmudra", "Verifying blocks..."),
QT_TRANSLATE_NOOP("koinmudra", "Verifying wallet..."),
QT_TRANSLATE_NOOP("koinmudra", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("koinmudra", "Wallet is locked."),
QT_TRANSLATE_NOOP("koinmudra", "Wallet needed to be rewritten: restart KoinMudra to complete"),
QT_TRANSLATE_NOOP("koinmudra", "Wallet options:"),
QT_TRANSLATE_NOOP("koinmudra", "Wallet window title"),
QT_TRANSLATE_NOOP("koinmudra", "Warning"),
QT_TRANSLATE_NOOP("koinmudra", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("koinmudra", "Warning: Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("koinmudra", "Warning: Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("koinmudra", "Will retry..."),
QT_TRANSLATE_NOOP("koinmudra", "You need to rebuild the database using -reindex to change -txindex"),
QT_TRANSLATE_NOOP("koinmudra", "Your entries added successfully."),
QT_TRANSLATE_NOOP("koinmudra", "Your transaction was accepted into the pool!"),
QT_TRANSLATE_NOOP("koinmudra", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("koinmudra", "ZeroMQ notification options:"),
QT_TRANSLATE_NOOP("koinmudra", "on startup"),
QT_TRANSLATE_NOOP("koinmudra", "wallet.dat corrupt, koinmudra failed"),
};
