// Placeholder for the mapped type of a std::map keyed by std::string in the
// library at 0x8284A000: four bytes with no destructor (the node's value is a
// 32-byte pair whose destructor only tidies the string). Named after the
// address of the map's clear until the type is known. The comparator and the
// allocator are assumed to be the defaults.

#ifndef GAME_VALUE_8284B810_H
#define GAME_VALUE_8284B810_H

#include <map>
#include <string>

struct Value_8284B810 {
    int data;
};

typedef std::map<std::string, Value_8284B810> Map_8284B810;

#endif
