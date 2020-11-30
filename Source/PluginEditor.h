/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Hello_audio_pluginAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    Hello_audio_pluginAudioProcessorEditor (Hello_audio_pluginAudioProcessor&);
    ~Hello_audio_pluginAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Hello_audio_pluginAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Hello_audio_pluginAudioProcessorEditor)
};
