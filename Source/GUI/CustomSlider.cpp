#include "CustomSlider.h"
#include <JuceHeader.h>

CustomSlider::CustomSlider()
{
    setSliderStyle(Slider::LinearHorizontal);
    setTextBoxStyle(Slider::NoTextBox, false, 0, 0);
    setRange(0.0, 1.0);
    setValue(0.5);
}

void CustomSlider::paint(Graphics& g)
{
    g.fillAll(Colours::darkgrey);
    g.setColour(Colours::cyan);
    g.fillRect(getLocalBounds().reduced(10));
}

void CustomSlider::resized()
{
    // Resize logic if needed
}
