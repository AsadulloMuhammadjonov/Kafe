object FormStolAlmashtirish: TFormStolAlmashtirish
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'FormStolAlmashtirish'
  ClientHeight = 624
  ClientWidth = 996
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -21
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 25
  object FlowPanel1: TFlowPanel
    Left = 0
    Top = 0
    Width = 996
    Height = 624
    Align = alClient
    TabOrder = 0
    ExplicitWidth = 794
    ExplicitHeight = 489
    object BitBtn1: TBitBtn
      Left = 1
      Top = 1
      Width = 232
      Height = 85
      Caption = 'BitBtn1'
      TabOrder = 0
      Visible = False
      OnClick = BitBtn1Click
    end
  end
end
