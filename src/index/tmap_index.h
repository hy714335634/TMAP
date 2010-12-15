/* Copyright (C) 2010 Ion Torrent Systems, Inc. All Rights Reserved */
#ifndef TMAP_INDEX_H
#define TMAP_INDEX_H

#define TMAP_INDEX_LARGE_GENOME 0x1000000
// (2^32) - 1
#define TMAP_INDEX_TOO_BIG_GENOME 0xFFFFFFFF

/*! 
  @details  Constructs the packed reference sequence, BWT string, and Suffix Array.
  */

/*! 
  structure to store the command line options for 'tmap index'
  */
typedef struct {
    char *fn_fasta;  /*!< the fasta file name (-f) */
    int32_t occ_interval;  /*!< the occurrence array interval (-o) */
    int32_t hash_width;  /*!< the occurrence hash width (-w) */
    int32_t sa_interval;  /*!< the suffix array interval (-i) */
    int32_t is_large;  /*!< 0 to use the short BWT construction algorith, 1 otherwise (large BWT construction algorithm) */
} tmap_index_opt_t;

/*! 
  main-like function for 'tmap index'
  @param  argc  the number of arguments
  @param  argv  the argument list
  @return       0 if executed successful
  */
int tmap_index(int argc, char *argv[]);

#endif