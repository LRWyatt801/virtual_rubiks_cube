#include <raylib.h>

#define WINDOW_WIDTH 1280
#define WINDOW_HEIGHT 720
#define FRAME_RATE 60

namespace window_draw {

class window {

private:
	const char *title;
	Camera3D camera;

public:
	/* window class constructor 
	 * This constructor will call InitWindow
	 */
	window(const char *str)
	: title(str) {
		InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, this->title);
		SetTargetFPS(FRAME_RATE);
	};

	/**
	 * init_3dcamera - method to initialize my 3d camera
	 */

	void init_3dcamera(void)
	{
		this->camera = { 0 };
		this->camera.position = (Vector3){ 10.0f, 10.0f, 10.0f };
		this->camera.target = (Vector3){ 0.0f, 0.0f, 0.0f };
		this->camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };
		this->camera.fovy = 45.0f;
		this->camera.projection = CAMERA_PERSPECTIVE;
	}

	/**
	 * close_window - method to close window
	 */

	void close_window(void)
	{
		CloseWindow();
	}

}; /* class window */

} /* namespace window_draw */

