object FormXodimQoshish: TFormXodimQoshish
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'FormXodimQoshish'
  ClientHeight = 435
  ClientWidth = 646
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
  object Label1: TLabel
    Left = 121
    Top = 89
    Width = 41
    Height = 33
    Caption = 'Tel'
  end
  object Label2: TLabel
    Left = 448
    Top = 94
    Width = 89
    Height = 33
    Caption = 'Huquq'
  end
  object LabeledEdit1: TLabeledEdit
    Left = 24
    Top = 40
    Width = 277
    Height = 41
    Alignment = taCenter
    EditLabel.Width = 67
    EditLabel.Height = 33
    EditLabel.Caption = 'FISH'
    TabOrder = 0
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
    TabOrder = 1
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
    TabOrder = 2
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
    TabOrder = 3
  end
  object MaskEdit1: TMaskEdit
    Left = 24
    Top = 128
    Width = 277
    Height = 41
    EditMask = '+\9\98 00 000-00-00;1;_'
    MaxLength = 17
    TabOrder = 4
    Text = '+998       -  -  '
  end
  object ComboBox1: TComboBox
    Left = 368
    Top = 128
    Width = 250
    Height = 41
    TabOrder = 5
    Items.Strings = (
      'Admin'
      'Kassir')
  end
  object Button1: TButton
    Left = 48
    Top = 312
    Width = 201
    Height = 73
    Caption = 'Saqlash'
    TabOrder = 6
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 393
    Top = 312
    Width = 201
    Height = 73
    Caption = 'Chiqish'
    TabOrder = 7
    OnClick = Button2Click
  end
end
