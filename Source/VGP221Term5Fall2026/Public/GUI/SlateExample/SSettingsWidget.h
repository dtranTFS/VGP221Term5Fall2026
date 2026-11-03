// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HUD/GameHUD.h"
#include "Widgets/SCompoundWidget.h"

/**
 * 
 */
class VGP221TERM5FALL2026_API SSettingsWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SSettingsWidget)
	{}
	SLATE_ARGUMENT(int, MyInt)
	SLATE_ARGUMENT(TWeakObjectPtr<class AGameHUD>, GameHUD)
	SLATE_END_ARGS()

	int MyInt;
	TWeakObjectPtr<class AGameHUD> GameHUD;

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);

	FReply OnResumeClicked() const;
	FReply OnIntClicked() const;
	FReply OnQuitClicked() const;

	/*
		Smart Pointers

		Unique Pointers: UnqiuePtr<T> = UnqiuePtr<int> score
			- Sole onwer of the object
			- Cannot be copied, only moved
			- Automatically deletes the object when it goes out of scope
			- Eg. Score Manager

		Shared Pointer: SharedPtr<T> = SharedPtr<int> PlayerHealth
			- Multiple onwership of the object it points to
			- Can be copied and shared among multiple owners
			- Automatically deletes the object when it goes out of scope
			- Eg. UI widgets, game objects shared across mutliple system(Health, Character, UI might use it as well)

		Weak Pointers: WeakPtr<T> = WeakPtr<UI> Game UI
			- Non-owning references to an object managed by a shared pointer
			- Doesn't affect the reference count of the shared pointer
			- Can be used break circular references
			- Must be convereted to shared pointer before use
			- Eg. Targeting system, where you reference enemy without preventing it from being destroyed and memory cleaned up

		Soft Object Pointers: SoftObjectPtr<T> = SoftObjectPtr<UStaticMesh> HugeCity
			- References a obbject that may not be in memory
			- Load assets on demand, reduces memory usage and improve performance
			- Eg. Large open world games, where you want to reference a city asset when you need it
	*/
};
