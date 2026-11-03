// Placeholder for the chunked container that func_8277E8B8 fill: a table of block
// pointers (0x80-byte blocks), grown by Grow when a new block is needed. Named
// after the address of Grow until the container type is known.

#ifndef GAME_GROW_8277CF68_H
#define GAME_GROW_8277CF68_H

struct V_8277CF68 {
    unsigned int size;    // elements stored
    unsigned int nblocks; // blocks allocated
    unsigned int cap;     // capacity of the block table
    void **blocks;
    void Grow(unsigned int idx); // reserves the table, allocates block idx
};

#endif
