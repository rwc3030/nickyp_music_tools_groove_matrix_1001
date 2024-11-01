#include "NewFeatureComponent.h"
#include <JuceHeader.h>

NewFeatureComponent::NewFeatureComponent()
{
    // Set up the UI components
    setSize(400, 300);
    addAndMakeVisible(myButton);
    myButton.setButtonText("Click Me");
    myButton.onClick = [this] { handleButtonClick(); };
}

void NewFeatureComponent::paint (Graphics& g)
{
    g.fillAll (Colours::black);
}

void NewFeatureComponent::resized()
{
    myButton.setBounds (getLocalBounds().reduced(20));
}

void NewFeatureComponent::handleButtonClick()
{
    // Handle button click event
    DBG("Button clicked!");
}

// NewFeatureComponent.h
#include <JuceHeader.h>

class NewFeatureComponent : public Component
{
public:
    NewFeatureComponent();
    void paint (Graphics&) override;
    void resized() override;

private:
    void handleButtonClick();
    TextButton myButton;
};
