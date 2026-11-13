// Placeholders for the entries of a std::map keyed by an unsigned id;
// func_8225E360 is that map's find. Each entry holds a pointer to an object (only
// its flag byte at 0xd8 is used so far) and a second word. Named after the
// address of the find until the types are known.

#ifndef GAME_VALUE_8225E360_H
#define GAME_VALUE_8225E360_H

#include <map>

struct Value_8225E360 {
    char pad[0xd8];
    char flag;
};

struct Entry_8225E360 {
    Value_8225E360 *object;
    int unk4;
};

typedef std::map<unsigned int, Entry_8225E360> Map_8225E360;

#endif
