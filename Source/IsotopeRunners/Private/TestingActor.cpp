// Fill out your copyright notice in the Description page of Project Settings.


#include "TestingActor.h"

// Sets default values
ATestingActor::ATestingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestingActor::BeginPlay()
{
	Super::BeginPlay();
	/*
	I am writing this comment to test if Wakatime works correctly.
	In fact, I want to see if this project pops up on my Hackatime dashboard.
	I don't know if it's tracking time correctly. THe "Start coding!" message pops up without showing any time.
	Will it work? Did it impact our modern society with its passive-agressive message?
	That's what we are going to see today in our gedichtanalyse: firstly, we are going to dive into the causes of this message
	sounding passive-agressive. Afterwards, we are going to analyze the meaning and consequences of this message appearing
	passive-agressive.
	*/
	
}

// Called every frame
void ATestingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

