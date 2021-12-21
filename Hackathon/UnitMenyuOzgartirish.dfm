object FormMenyuOzgartirish: TFormMenyuOzgartirish
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'FormMenyuOzgartirish'
  ClientHeight = 417
  ClientWidth = 404
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -27
  Font.Name = 'Tahoma'
  Font.Style = [fsBold]
  OldCreateOrder = False
  Position = poScreenCenter
  OnClose = FormClose
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 33
  object Label1: TLabel
    Left = 128
    Top = 216
    Width = 148
    Height = 33
    Caption = 'Kategoriya'
  end
  object LabeledEdit1: TLabeledEdit
    Left = 80
    Top = 48
    Width = 250
    Height = 41
    Alignment = taCenter
    EditLabel.Width = 72
    EditLabel.Height = 33
    EditLabel.Caption = 'Nomi'
    TabOrder = 0
  end
  object LabeledEdit2: TLabeledEdit
    Left = 80
    Top = 152
    Width = 250
    Height = 41
    Alignment = taCenter
    EditLabel.Width = 73
    EditLabel.Height = 33
    EditLabel.Caption = 'Narxi'
    TabOrder = 1
  end
  object ComboBox1: TComboBox
    Left = 80
    Top = 251
    Width = 250
    Height = 41
    TabOrder = 2
  end
  object Button2: TButton
    Left = 211
    Top = 312
    Width = 169
    Height = 81
    Caption = 'Chiqish'
    TabOrder = 3
    OnClick = Button2Click
  end
  object Button1: TButton
    Left = 19
    Top = 312
    Width = 169
    Height = 81
    Caption = 'Saqlash'
    TabOrder = 4
    OnClick = Button1Click
  end
end
