#include "gui.hpp"
#include "config.hpp"

int main(int argc, char *argv[])
{
	u32* input = (u32*) malloc(sizeof(u32) * (argc - 1));
	bool headless = atoi(argv[1]);
	int maxRuntime = atoi(argv[2]);
	for(int i = 2; i < argc - 1; i++){
		input[i - 2] = atoi(argv[i + 1]);
	}

    GUI::load_settings();
    GUI::init(headless, maxRuntime, input, argc - 1);
    GUI::run();

    return 0;
}
