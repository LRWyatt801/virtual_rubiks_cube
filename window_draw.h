#ifndef _WINDOW_DRAW_H
#define _WINDOW_DRAW_H

namespace window_draw {

class window {
private:
	int window_width = 1280;
	int window_height = 720;

public:
	void init_window();
	void init_camera();
}; /* class window */

} /* window_draw */

#endif /* _WINDOW_DRAW_H */
