object FormOmborOzgartirish: TFormOmborOzgartirish
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'FormOmborOzgartirish'
  ClientHeight = 392
  ClientWidth = 629
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -27
  Font.Name = 'Tahoma'
  Font.Style = [fsBold]
  OldCreateOrder = False
  Position = poScreenCenter
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 33
  object LabeledEdit1: TLabeledEdit
    Left = 25
    Top = 56
    Width = 250
    Height = 41
    Alignment = taCenter
    EditLabel.Width = 72
    EditLabel.Height = 33
    EditLabel.Caption = 'Nomi'
    TabOrder = 0
  end
  object LabeledEdit2: TLabeledEdit
    Left = 25
    Top = 176
    Width = 250
    Height = 41
    Alignment = taCenter
    EditLabel.Width = 95
    EditLabel.Height = 33
    EditLabel.Caption = 'Miqdor'
    TabOrder = 1
  end
  object LabeledEdit3: TLabeledEdit
    Left = 352
    Top = 56
    Width = 250
    Height = 41
    Alignment = taCenter
    EditLabel.Width = 65
    EditLabel.Height = 33
    EditLabel.Caption = 'Narx'
    TabOrder = 2
  end
  object LabeledEdit4: TLabeledEdit
    Left = 352
    Top = 176
    Width = 250
    Height = 41
    Alignment = taCenter
    EditLabel.Width = 80
    EditLabel.Height = 33
    EditLabel.Caption = 'Birligi'
    TabOrder = 3
  end
  object Button2: TButton
    Left = 352
    Top = 280
    Width = 250
    Height = 81
    Caption = 'Chiqish'
    TabOrder = 4
    OnClick = Button2Click
  end
  object Button1: TButton
    Left = 25
    Top = 280
    Width = 250
    Height = 81
    Caption = 'Saqlash'
    TabOrder = 5
    OnClick = Button1Click
  end
end
