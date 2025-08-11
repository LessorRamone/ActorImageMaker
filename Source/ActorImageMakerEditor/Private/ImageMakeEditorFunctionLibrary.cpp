// Fill out your copyright notice in the Description page of Project Settings.


#include "ImageMakeEditorFunctionLibrary.h"
#include "Kismet/KismetRenderingLibrary.h"

void UImageMakeEditorFunctionLibrary::MakeStaticTextureFromRT(UTextureRenderTarget2D* RenderTarget, FString Name)
{
	UTexture2D* StaticText = UKismetRenderingLibrary::RenderTargetCreateStaticTexture2DEditorOnly(RenderTarget, Name,  TextureCompressionSettings::TC_Default, TextureMipGenSettings::TMGS_NoMipmaps);
}
