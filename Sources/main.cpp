#include <Kt/stdafx.h>
#include <Kt/Application.h>
#include <Kt/Scene.h>
#include <Kt/Item.h>
#include <Kt/Input/Keyboard.h>
#include <Kt/Sound/Sound.h>
#include <stdio.h>
#include <Main.h>

extern "C" const char *hxRunLibrary();
extern "C" void hxcpp_set_top_of_stack();

Kt::Painter* haxePainter;

namespace {
	class HaxeItem : public Kt::Item {
	public:
		float width() {
			return 600;
		}

		float height() {
			return 520;
		}

		void render(Kt::Painter* painter) {
			haxePainter = painter;
			Main_obj::frame();
		}
	};

	void keyDown(Kt::KeyEvent* event) {
		switch (event->keycode()) {
		case Kt::Key_Up:
			Main_obj::pushUp();
			break;
		case Kt::Key_Down:
			Main_obj::pushDown();
			break;
		case Kt::Key_Left:
			Main_obj::pushLeft();
			break;
		case Kt::Key_Right:
			Main_obj::pushRight();
			break;
		}
	}

	void keyUp(Kt::KeyEvent* event) {
		switch (event->keycode()) {
		case Kt::Key_Up:
			Main_obj::releaseUp();
			break;
		case Kt::Key_Down:
			Main_obj::releaseDown();
			break;
		case Kt::Key_Left:
			Main_obj::releaseLeft();
			break;
		case Kt::Key_Right:
			Main_obj::releaseRight();
			break;
		}
	}
}

int ktmain(int argc, char** argv) {
	// Do this first
	hxcpp_set_top_of_stack();

   // Register additional ndll libaries ...
   // nme_register_prims();
	Kt::Application app(argc, argv, 600, 520);
	Kt::Sound::init();
	//printf("Begin!\n");
 	const char *err = hxRunLibrary();
	if (err) {
		// Unhandled exceptions ...
		fprintf(stderr,"Error %s\n", err );
		return -1;
	}
	Kt::Keyboard::the()->KeyDown += keyDown;
	Kt::Keyboard::the()->KeyUp += keyUp;
	Kt::Scene::the()->add(Kt::Handle<HaxeItem>(new HaxeItem));
	app.start();
	//printf("Done!\n");
	return 0;
}