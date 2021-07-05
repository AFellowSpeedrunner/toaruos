#pragma once

#include <stdint.h>

extern struct TT_Font * tt_font_from_file(const char * fileName);
extern int tt_glyph_for_codepoint(struct TT_Font * font, unsigned int codepoint);
extern void tt_draw_glyph(gfx_context_t * ctx, struct TT_Font * font, int x_offset, int y_offset, unsigned int glyph, uint32_t color);
extern void tt_set_size(struct TT_Font * font, int size);
extern int tt_xadvance_for_glyph(struct TT_Font * font, unsigned int ind);
extern int tt_string_width(struct TT_Font * font, const char * s);
extern int tt_draw_string(gfx_context_t * ctx, struct TT_Font * font, int x, int y, const char * s, uint32_t color);
