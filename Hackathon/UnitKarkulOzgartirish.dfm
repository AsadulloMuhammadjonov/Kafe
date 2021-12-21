object FormKarkulOzgartirish: TFormKarkulOzgartirish
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'FormKarkulOzgartirish'
  ClientHeight = 472
  ClientWidth = 657
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
    Left = 121
    Top = 32
    Width = 76
    Height = 33
    Caption = 'Taom'
  end
  object Label2: TLabel
    Left = 111
    Top = 142
    Width = 111
    Height = 33
    Caption = 'Masalliq'
  end
  object ComboBox2: TComboBox
    Left = 40
    Top = 71
    Width = 250
    Height = 41
    TabOrder = 0
  end
  object ComboBox1: TComboBox
    Left = 40
    Top = 174
    Width = 250
    Height = 41
    TabOrder = 1
    OnSelect = ComboBox1Select
  end
  object LabeledEdit3: TLabeledEdit
    Left = 40
    Top = 289
    Width = 250
    Height = 41
    Alignment = taCenter
    EditLabel.Width = 65
    EditLabel.Height = 33
    EditLabel.Caption = 'Narx'
    TabOrder = 2
  end
  object LabeledEdit4: TLabeledEdit
    Left = 368
    Top = 289
    Width = 250
    Height = 41
    Alignment = taCenter
    EditLabel.Width = 102
    EditLabel.Height = 33
    EditLabel.Caption = 'Summa'
    TabOrder = 3
  end
  object LabeledEdit2: TLabeledEdit
    Left = 368
    Top = 174
    Width = 250
    Height = 41
    Alignment = taCenter
    EditLabel.Width = 71
    EditLabel.Height = 33
    EditLabel.Caption = 'Birlik'
    TabOrder = 4
  end
  object LabeledEdit1: TLabeledEdit
    Left = 368
    Top = 69
    Width = 250
    Height = 41
    Alignment = taCenter
    EditLabel.Width = 95
    EditLabel.Height = 33
    EditLabel.Caption = 'Miqdor'
    TabOrder = 5
    OnExit = LabeledEdit1Exit
  end
  object Button2: TButton
    Left = 368
    Top = 360
    Width = 250
    Height = 73
    Caption = 'Chiqish'
    TabOrder = 6
    OnClick = Button2Click
  end
  object Button1: TButton
    Left = 40
    Top = 360
    Width = 250
    Height = 73
    Caption = 'Saqlash'
    TabOrder = 7
    OnClick = Button1Click
  end
end
