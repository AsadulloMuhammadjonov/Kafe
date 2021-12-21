object FormStollar: TFormStollar
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'FormStollar'
  ClientHeight = 624
  ClientWidth = 996
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -24
  Font.Name = 'Tahoma'
  Font.Style = [fsBold]
  OldCreateOrder = False
  Position = poScreenCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 29
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 996
    Height = 75
    Align = alTop
    TabOrder = 0
    ExplicitWidth = 1194
    object Label1: TLabel
      Left = 432
      Top = 5
      Width = 79
      Height = 29
      Caption = 'Label1'
      Visible = False
    end
    object Label2: TLabel
      Left = 432
      Top = 40
      Width = 79
      Height = 29
      Caption = 'Label2'
    end
    object Button1: TButton
      Left = 1
      Top = 1
      Width = 168
      Height = 73
      Align = alLeft
      Caption = 'Stollar'
      TabOrder = 0
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 850
      Top = 1
      Width = 145
      Height = 73
      Align = alRight
      Caption = 'Chiqish'
      TabOrder = 1
      OnClick = Button2Click
      ExplicitLeft = 1048
    end
  end
  object FlowPanel1: TFlowPanel
    Left = 0
    Top = 75
    Width = 996
    Height = 591
    Align = alTop
    TabOrder = 1
    ExplicitWidth = 1194
    object Button3: TButton
      Left = 1
      Top = 1
      Width = 75
      Height = 25
      Caption = 'Button3'
      TabOrder = 0
      Visible = False
      OnClick = Button3Click
    end
    object BitBtn1: TBitBtn
      Left = 76
      Top = 1
      Width = 189
      Height = 85
      Caption = 'BitBtn1'
      TabOrder = 1
      Visible = False
      OnClick = BitBtn1Click
    end
  end
end
