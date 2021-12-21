object FormXodimOzgartirish: TFormXodimOzgartirish
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'FormXodimOzgartirish'
  ClientHeight = 408
  ClientWidth = 647
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
    Left = 24
    Top = 40
    Width = 275
    Height = 41
    Alignment = taCenter
    EditLabel.Width = 67
    EditLabel.Height = 33
    EditLabel.Caption = 'FISH'
    TabOrder = 0
  end
  object MaskEdit1: TMaskEdit
    Left = 24
    Top = 128
    Width = 277
    Height = 41
    EditMask = '+\9\98 00 000-00-00;1;_'
    MaxLength = 17
    TabOrder = 1
    Text = '+998       -  -  '
  end
  object LabeledEdit2: TLabeledEdit
    Left = 24
    Top = 240
    Width = 277
    Height = 41
    Alignment = taCenter
    EditLabel.Width = 124
    EditLabel.Height = 33
    EditLabel.Caption = 'Ish_Foizi'
    TabOrder = 2
  end
  object Button1: TButton
    Left = 24
    Top = 312
    Width = 201
    Height = 73
    Caption = 'Saqlash'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 417
    Top = 312
    Width = 201
    Height = 73
    Caption = 'Chiqish'
    TabOrder = 4
    OnClick = Button2Click
  end
  object LabeledEdit4: TLabeledEdit
    Left = 368
    Top = 240
    Width = 250
    Height = 41
    Alignment = taCenter
    EditLabel.Width = 133
    EditLabel.Height = 33
    EditLabel.Caption = 'Qo'#39'l_Foizi'
    TabOrder = 5
  end
  object ComboBox1: TComboBox
    Left = 368
    Top = 128
    Width = 250
    Height = 41
    TabOrder = 6
    Items.Strings = (
      'Admin'
      'Kassir')
  end
  object LabeledEdit3: TLabeledEdit
    Left = 368
    Top = 40
    Width = 250
    Height = 41
    Alignment = taCenter
    EditLabel.Width = 71
    EditLabel.Height = 33
    EditLabel.Caption = 'Parol'
    TabOrder = 7
  end
end
