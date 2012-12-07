/* -*- c++ -*- */
/* 
 * Copyright 2012 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_SPRITE_BITDETECTOR_FB_H
#define INCLUDED_SPRITE_BITDETECTOR_FB_H

#include <sprite_api.h>
#include <gr_sync_decimator.h>

class sprite_bitdetector_fb;

typedef boost::shared_ptr<sprite_bitdetector_fb> sprite_bitdetector_fb_sptr;

SPRITE_API sprite_bitdetector_fb_sptr sprite_make_bitdetector_fb (float threshold);

/*!
 * \brief <+description+>
 * \ingroup block
 *
 */
class SPRITE_API sprite_bitdetector_fb : public gr_sync_decimator
{
  private:
	friend SPRITE_API sprite_bitdetector_fb_sptr sprite_make_bitdetector_fb(float threshold);
	sprite_bitdetector_fb(float threshold);
	float m_threshold;

  public:
	~sprite_bitdetector_fb();

	// Where all the action really happens
	int work (int noutput_items,
	    gr_vector_const_void_star &input_items,
	    gr_vector_void_star &output_items);
};

#endif /* INCLUDED_SPRITE_BITDETECTOR_FB_H */

