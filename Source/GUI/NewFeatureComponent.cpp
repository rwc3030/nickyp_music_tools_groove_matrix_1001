#include "NewFeatureComponent.h"

NewFeatureComponent::NewFeatureComponent()
{
    featureButton.setButtonText("Activate Feature");
    featureButton.onClick = [this] { handleButtonClick(); };
    addAndMakeVisible(featureButton);
}

void NewFeatureComponent::paint(Graphics& g)
{
    g.fillAll(Colours::black);
    g.setColour(Colours::white);
    g.drawText("New Feature Component", getLocalBounds(), Justification::centred, true);
}

void NewFeatureComponent::resized()
{
    featureButton.setBounds(10, 10, getWidth() - 20, 40);
}

void NewFeatureComponent::handleButtonClick()
{
    // Implementation of the feature's functionality goes here
    DBG("Feature activated!");
}
