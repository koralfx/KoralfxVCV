#include "../Koralfx-Modules.hpp"
#include "../KoralfxComponents.hpp"

struct Nullovnik6 : Module {
    enum ParamIds {
        NUM_PARAMS
    };
    enum InputIds {
        NUM_INPUTS
    };
    enum OutputIds {
        NUM_OUTPUTS
    };
    enum LightIds {
        NUM_LIGHTS
    };


    Nullovnik6() {
        // Configure the module
        config(NUM_PARAMS, NUM_INPUTS, NUM_OUTPUTS, NUM_LIGHTS);

    }



///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
////////////////////////////////// Step ///////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

    void process(const ProcessArgs &args) override {
    }
};
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
/////////////////////////////////// GUI ///////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////


struct Nullovnik6Widget : ModuleWidget {

    Nullovnik6Widget(Nullovnik6 *module) {
        setModule(module);
        box.size = Vec(6 * RACK_GRID_WIDTH, RACK_GRID_HEIGHT);
        setPanel(APP->window->loadSvg(asset::plugin(pluginInstance, "res/Nullovnik6-Dark.svg")));
    }
};


////////////////////////////////////////////////////////////////////////////////////////////////////

Model *modelNullovnik6 = createModel<Nullovnik6, Nullovnik6Widget>("Nullovnik6");
