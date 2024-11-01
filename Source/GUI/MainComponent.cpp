#include "MainComponent.h"
#include "CustomSlider.h"
#include <JuceHeader.h>

MainComponent::MainComponent()
{
    setSize(600, 400);
    addAndMakeVisible(customSlider);
}

void MainComponent::paint(Graphics& g)
{
    g.fillAll(Colours::black);
}

void MainComponent::resized()
{
    customSlider.setBounds(40, 100, getWidth() - 80, 20);
}
