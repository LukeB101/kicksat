/* -*- c++ -*- */

#define SPRITE_API

%include "gnuradio.i"			// the common stuff

//load generated python docstrings
%include "sprite_swig_doc.i"


%{
#include "sprite_correlator_cf.h"
#include "sprite_bitdetector_fb.h"
%}


GR_SWIG_BLOCK_MAGIC(sprite,correlator_cf);
%include "sprite_correlator_cf.h"

GR_SWIG_BLOCK_MAGIC(sprite,bitdetector_fb);
%include "sprite_bitdetector_fb.h"