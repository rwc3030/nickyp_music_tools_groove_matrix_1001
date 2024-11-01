#include "NewFeatureComponent.h"
#include "MainComponent.h"

NewFeatureComponent::NewFeatureComponent()
{
    // Initialize UI elements here
    button = new TextButton("Click Me");
    button->onClick = [this] { handleButtonClick(); };
    addAndMakeVisible(button);
}

void NewFeatureComponent::paint(Graphics& g)
{
    g.fillAll(Colours::black);
    g.setColour(Colours::cyan);
    g.drawText("New Feature Component", getLocalBounds(), Justification::centred, true);
}

void NewFeatureComponent::resized()
{
    button->setBounds(10, 10, 100, 30);
}

void NewFeatureComponent::handleButtonClick()
{
    // Handle button click event
    DBG("Button clicked!");
}
