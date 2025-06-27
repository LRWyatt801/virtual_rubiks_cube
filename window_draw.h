#ifndef _WINDOW_DRAW_H
#define _WINDOW_DRAW_H

namespace window_draw {

class window {
private:
	const char *Title;
public:
	window(const char *str);
	void init_3dcamera();
	void close_window();
}; /* class window */

} /* window_draw */

#endif /* _WINDOW_DRAW_H */
