// MyActor.cpp


#include "MyActor.h"

AMyActor::AMyActor()
{
	PrimaryActorTick.bCanEverTick = true;

}
//갈등을 해소하고 합의된 내용으로 작업중... >> 옛작업 브랜치 run을 버리고
//새로운 브랜치 new를 파서 합의된 내용으로 새작업중...
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("AMyActor has begun play~~~"));

}

void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UE_LOG(LogTemp, Warning, TEXT("AMyActor is ticking!~teamwork"));

}

