#ifndef PUSH_H_
#define PUSH_H_
#include "psTypes.h"
#include <SellCSigma.h>

namespace particle_structs {

void push_array(int np, fp_t* xs, fp_t* ys, fp_t* zs,
    int* ptcl_to_elem, elemCoords& elems,
    fp_t distance, fp_t dx, fp_t dy, fp_t dz,
    fp_t* new_xs, fp_t* new_ys, fp_t* new_zs);

void push_array_kk(int np, fp_t* xs, fp_t* ys, fp_t* zs,
    int* ptcl_to_elem, elemCoords& elems,
    fp_t distance, fp_t dx, fp_t dy, fp_t dz,
    fp_t* new_xs, fp_t* new_ys, fp_t* new_zs);

void push_scs(SellCSigma<Particle>* scs,
    int* ptcl_to_elem, elemCoords& elems,
    fp_t distance, fp_t dx, fp_t dy, fp_t dz);


void push_scs_kk(SellCSigma<Particle>* scs, int np, elemCoords& elems,
    fp_t distance, fp_t dx, fp_t dy, fp_t dz);

void push_scs_kk_macros(SellCSigma<Particle>* scs, int np, elemCoords& elems,
    fp_t distance, fp_t dx, fp_t dy, fp_t dz);

}

#endif
